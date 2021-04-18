#include "Cle.h"
#include <iostream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Cle {       
  public:           
    int number;
    string pubKey, privKey;

  public: 

    void Cle::initialize(int number){
        privKey = number;
    };

    string Cle::getPrivateKey(){
      return privKey;
    
    };

    string getPublicKey(){
      return pubKey;
    };    

    
        
};

