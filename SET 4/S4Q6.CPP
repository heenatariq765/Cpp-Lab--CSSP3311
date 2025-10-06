
#include<iostream>
using namespace std;
class Box
{
    public:
    int length,width,height;
    Box(int l,int w,int h)
    {
        length=l;
        width=w;
        height=h;
    }
    int volume(){
        return length*width*height;
    }
    void Compare(Box b){
        if(volume()>b.volume()){
            cout<<"Box 1 has greater volume"<<endl;
        }
        else if(volume()<b.volume()){
            cout<<"Box 2 has greater volume"<<endl;
        }
        else{
            cout<<"Both boxes have equal volume"<<endl;
        }
    }
    void display(){
        cout<<"Length="<<length<<endl;
        cout<<"Width="<<width<<endl;
        cout<<"Height="<<height<<endl;
        cout<<"Volume="<<volume()<<endl;
    }
};
int main()
{
    Box B1(10,20,30);
    Box B2(15,25,35);
    cout<<"Details of Box 1:"<<endl;
    B1.display();
    cout<<"Details of Box 2:"<<endl;
    B2.display();
    B1.Compare(B2);
    return 0;
}