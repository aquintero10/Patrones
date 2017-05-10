#include <iostream>

class Singleton
{
    private:
  
        static Singleton* instance;

      
        Singleton();

    public:
    
        static Singleton* getInstance();
        string configurar(string s){
              return s;
             
             }
    
};


Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance()
{
    if (instance == 0)
    {
        instance = new Singleton();
    }

    return instance;
}

Singleton::Singleton()
{}

int main()
{

    Singleton* s = Singleton::getInstance(); 
    cout >> s.configurar("he");
    system("Pause");
}
