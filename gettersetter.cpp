#include <iostream>
using namespace std;


class Movie
{
    private:
    string rating;

    public:
    string title;
    string authorname;

    

    Movie(string aTitle, string aAuthor, string aRating)
    {
        title = aTitle;
        authorname = aAuthor;
        setRating(aRating);
    }
    void setRating(string aRating){
        if(aRating == "pg" || aRating == "r"){
            rating = aRating;
        }   
        else{
            rating = "nr";
        }
    }
    string getRating(){
        return rating;
    }
};

int main()
{

    Movie movie1("harry potter", "rk rowlins", "r");
    movie1.setRating("dog");

    cout << movie1.getRating();

    return 0;
}