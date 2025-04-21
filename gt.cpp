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

    Singer first ("Pedro", 18, "Tenor");
    first.sing(); 
    Dancer performer ("Jacob", 18, "Hiphop");
    performer.dance();

    return 0;
}

// By: Kyle Gabriel Dones
// IT2A