#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display() = 0; //do-nothing function-->pure virtual function
      
};
class CWHVideo : public CWH{
    int videolength;
    public:
        CWHVideo(string s, float r, int vl) : CWH(s,r){
            videolength = vl;
        }
        void display(){
            cout<<"This is an amazing vide with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"lenght of this video is: "<<videolength<<" minutes"<<endl;
        }
        
};
class CWHText : public CWH{
    int words;
    public:
        CWHText(string s, float r, int wc) : CWH(s,r){
            words = wc;
        }
    void display(){
        cout<<"This an amazing text "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<"word in this text "<<words<<endl;
    }
};  
int main()
{
    string title;
    float rating,vlen;
    int words;

     // for Video
     title = "Django";
     rating = 1.2;
     vlen = 5.46;
    CWHVideo djvideo(title,rating,vlen);
    // djvideo.display();
    
    // for text
     title = "Django text";
     rating = 1.2;
    words = 256;
     CWHText djtext(title,rating,words);
    // djtext.display();

    CWH *tuts[2];

    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    cout<<"\n";
    tuts[1]->display();
    
    
    return 0;
}