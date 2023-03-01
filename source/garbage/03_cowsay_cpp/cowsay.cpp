#include <iostream>
#include <string>
#include <emscripten.h>
using namespace std;

void printCow(string, int);

EMSCRIPTEN_KEEPALIVE
int main(int argc, char const *argv[])
{
    // To avoid exit after leaving main(), keeping events alive.
  	//EM_ASM(Module['noExitRuntime'] = true);

	if (argc<2)
	{
		cerr<<"You have not given any argument!"<<'\n';
		return 1;
	}
	string cowsay;

	for (int i=1; i<argc; i++) {
		cowsay+=argv[i]; 
		
		if (i<(argc-1)){
			cowsay+=" ";
		}
	};

	int length=cowsay.size();
	printCow(cowsay, length);
	return 0;
}

EMSCRIPTEN_KEEPALIVE
void printCow(string text, int n){
	cout<<' '<<string(n, '_')<<'\n';
	cout<<'('<<text<<')'<<'\n';
	cout<<' '<<string(n, '-')<<'\n';
	cout<<"    \\   ^__^"<<'\n';
    cout<<"     \\  (oo)\\_______"<<'\n';
    cout<<"        (__)\\       )\\/\\"<<'\n';
    cout<<"            ||----w |"<<'\n';
    cout<<"            ||     ||"<<'\n';
}