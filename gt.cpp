#include <iostream>
using namespace std;


class Performer {
    private:
    string name;
    int age;

    public:
    Performer(string n, int a) : name(n), age(a){}

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

};

class Singer : public Performer{
    private:
    string vocalRange;

    public:
    Singer(string n, int a, string r) : Performer(n,a), vocalRange(r){}

    string getVocalRange(){
        return vocalRange;
    }

    void sing(){
        cout<<getName()<<" is singing with a "<<getVocalRange()<<" range"<<endl;
    }

};

class Dancer : public Performer{
    private:
    string danceStyle;

    public:
    Dancer(string n, int a, string ds) : Performer(n,a), danceStyle(ds){}

    string getDanceStyle(){
        return danceStyle;
    }

    void dance(){
        cout<<getName()<<" is performing a "<<getDanceStyle()<<" dance"<<endl;
    }

};





int main(){

    string choice;

    cout<<"Are you a Singer or a Dancer?: ";
    cin>>choice;

    string name;
    int age;

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Enter your age: ";
    cin>>age;

    if (choice == "Singer" || choice == "singer"){
        string vocalRange;
        cout<<"ENter your vocal range: ";
        cin>>vocalRange;

        Singer user(name, age , vocalRange);
        user.sing();
    }

    else if (choice == "Dancer" || choice == "dancer"){
        string danceStyle;
        cout<<"ENter your dance style: ";
        cin>>danceStyle;

        Dancer user(name, age , danceStyle);
        user.dance();
    }

    else{
        cout<<"Invalid input"<<endl;
    }

    return 0;
}

// By: Kyle Gabriel Dones
//  IT2A