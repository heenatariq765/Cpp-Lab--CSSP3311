#include<iostream>
using namespace std;
class FileHandler
{
    public:
   FileHandler()
   {
    cout<<"File opened"<<endl;
   }
    ~FileHandler()
    {
     cout<<"File closed"<<endl;
    }
};
int main()
{
    FileHandler F1;
return 0;
}