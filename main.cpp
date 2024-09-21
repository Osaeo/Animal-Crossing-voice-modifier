#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>



bool addChar(std::string c2, std::string c1 = "asb.wav"){
    std::string command = "sox " + c1 + " " + c2 + " asb2.wav";
    
    
    if(system(command.c_str()) == 0){
        if(system("mv asb2.wav asb.wav") != 0){
            std::cout << "une autre erreur c'est produite\n";
        }
        return true;
    }
    else{
        std::cout << "une erreur c'est produite\n";
        return false;
    }
}

int main(){
    std::string test = " ";
    std::cin >> test;
    std::string c1, c2;
    for(int i = 1 ; i < test.length() ; i++){
        if (i == 1){
            c1 = "'./calixteVoice/" + std::string(1,std::toupper(test[0])) + ".wav'";
            c2 = "'./calixteVoice/" + std::string(1,std::toupper(test[1])) + ".wav'";
            if (!addChar(c2, c1)){
                std::cout << "stop\n";
                return -1;
            }
        }
        else{
            c2 = "'./calixteVoice/" + std::string(1,std::toupper(test[i])) + ".wav'";
            if (addChar(c2) == false){
                std::cout << "stop\n";
                return -1;
            }
        }
        
    }
    std::cout << "concatenation reussis\n";
    system("sox asb.wav result.wav tempo 6 vol 0.9");
    std::cout << "tout reussis\n";
    return 0;
}

// Sous les paves sombres invisibles aux yeux Coulent des rivieres ou s echappent nos aveux Dans l ombre humide des canaux tortueux Les egouts murmurent des secrets silencieux Ils recueillent la pluie les larmes les regrets Les echos de la ville ses rires oublies Les restes des festins les traces de nos pas Tout s y mele en un fleuve que personne ne voit Sous terre loin des regards leur danse continue Ils portent notre monde dans un silence tetu Oublies des vivants ignores des passants Les egouts sont l ombre de nos reves d antan Mais dans cette noirceur une vie s eveille Des creatures etranges y tissent leur sommeil La ou tout finit la ou tout se perd Les egouts sont le ventre de la terre notre mere