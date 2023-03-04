import React from "react";
import logo from "./logo.svg";
import "./App.css";
import {ImageMagickTest} from "./component/ImageMagickTest";


const styles = {
  fontFamily: "sans-serif",
  textAlign: "center",
};

function App() {
  return (
    <div style={styles}>
       <ImageMagickTest />    
    </div>
  );
}

export default App;
