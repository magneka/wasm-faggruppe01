#include <emscripten.h>
#include <emscripten/bind.h>
#include <sstream>

using namespace emscripten;
using namespace std;

class CowSay {
    private:
        int mess_len = { 0 };
        std::string message = { };    

    public:
        void setMessage(std::string _message) {
            message = _message;
            mess_len = _message.length();
        }

        std::string sayMoo() {
            std::ostringstream a;

            a<<' '<<string(mess_len, '_')<<'\n';
            a<<'('<<message<<')'<<'\n';
            a<<' '<<string(mess_len, '-')<<'\n';
            a<<"    \\   ^__^"<<'\n';
            a<<"     \\  (oo)\\_______"<<'\n';
            a<<"        (__)\\       )\\/\\"<<'\n';
            a<<"            ||----w |"<<'\n';
            a<<"            ||     ||"<<'\n';

            return a.str();
        }
};

int main()
{  
  return 0;
}

/*
  Bindings som er tilgjengelig fra javascript:
  - Constructor må evt ha paramertertype deklarert i <> foran parantes
  - Oppgi metodenavn og peker til metoden
  Kompiler med 
     em++ -std=c++20 -O1 -s WASM=1 -lembind
*/
EMSCRIPTEN_BINDINGS(CowSay_example) {
    class_<CowSay>("CowSay")
        .constructor()
        .function("setMessage", &CowSay::setMessage)
        .function("sayMoo", &CowSay::sayMoo)
        ;
}