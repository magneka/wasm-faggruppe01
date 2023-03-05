import React, { useState } from "react";
// Merk erstattet med window magick
//import * as Magick from "wasm-imagemagick";


export const ImageMagickTest = () => {

    const [defaultParams, setDefaultParams] = useState('[ "convert", "large.jpg", "-resize", "25%", "out.jpg" ]')
    const [selectedImage, setSelectedImage] = useState();
    const [selectedFileName, setSelectedFileName] = useState();

    const imageChange = async (e) => {
        if (e.target.files && e.target.files.length > 0) {
          setSelectedImage(e.target.files[0]);
          setSelectedFileName(e.target.files[0].name)

          const fetchedSourceImage = await fetch("large.jpg");
          const sourceBytes = new Uint8Array(await fetchedSourceImage.arrayBuffer());
        }
    };

    async function doMagick() {
        const start = performance.now();
        // the image element where to load output images
        const outputImage = document.getElementById("outImage");
              
        // fetch the input image and get its content bytes
        const fetchedSourceImage = await fetch("large.jpg");
        const sourceBytes = new Uint8Array(await fetchedSourceImage.arrayBuffer());
      
        // calling ImageMagick with one source image, and command to rotate & resize image
        const inputFiles = [{ name: "large.jpg", content: sourceBytes }];
        let command = [];
        try {
          //command = JSON.parse(document.getElementById("input").value);
          command = JSON.parse(defaultParams);
        } catch (ex) {
          alert(ex);
          //throw ex
        }
        console.log({ command: command.join(", "), content: inputFiles[0].content });
        
        //debugger;
        let Magick = window.magick;
        const processedFiles = await Magick.Call(inputFiles, command);
        
        // response can be multiple files (example split) here we know we just have one
        const firstOutputImage = processedFiles[0];
        outputImage.src = URL.createObjectURL(firstOutputImage["blob"]);
        
        console.log("created image " + firstOutputImage["name"]);
        console.log(performance.now() - start);
    }

    return (
        <>
            <input accept="image/*" type="file"onChange={imageChange} />
            {selectedImage && <img src={URL.createObjectURL(selectedImage)} alt="Thumb"/>}

            <p>Command: </p>
            <textarea
                style={{ width: "100%", height: "100px" }}
                id="input"
                value={defaultParams} onChange={(e) => setDefaultParams(e.target.value)}                
            ></textarea>

            <p>
                <button onClick={doMagick}>do magick</button>
            </p>

            <p>Source image: </p>
            <img id="srcImage" src="large.jpg" style={{ width: "100%" }} />
            <p>Result: </p>
            <img id="outImage" />
        
        </>
    )

}