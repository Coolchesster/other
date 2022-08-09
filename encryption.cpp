#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map <char,char> MyCode = {{'a','!'},{'b','@'},{'c','#'},{'d','$'},{'e','%'},{'f','^'},{'g','&'},{'h','*'},{'i','('},{'j',')'},{'k','-'},
                                    {'l','_'},{'m','='},{'n','+'},{'o','['},{'p','{'},{'q',']'},{'r','}'},{'s','|'},{'t',':'},{'u','>'},{'v','?'},{'x','/'},{'y',','},{'z','<'} };
        string phrase = "the quick fox jumped over the lazy dog";
                    for (auto i = MyCode.begin(); i != MyCode.end();i++){
                for (int j = 0; j < phrase.length();j++){
                        if (i->first == phrase[j]){
                            phrase[j] = i->second;
                        }
                }
                }
                for (auto i = 0; i < phrase.length();i++){
                    cout << phrase[i];
                }
                        cout << endl;
                        for (auto i = MyCode.begin(); i != MyCode.end();i++){
                for (int j = 0; j < phrase.length();j++){
                        if (i->second == phrase[j]){
                            phrase[j] = i->first;
                        }
                }
                        }
                 for (auto i = 0; i < phrase.length();i++){
                    cout << phrase[i];
                }

    return 0;

}
