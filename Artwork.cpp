#include "Artwork.h"
#include <iostream> 

using namespace std;

// TODO: Define default constructor
Artwork::Artwork()
{
   title = "None";
   yearCreated = 0;
}
Artwork::Artwork(string title, int yearCreated, Artist artist)
{
   this->title = title;
   this->yearCreated = yearCreated; 
   this-> artist = artist;
}
string Artwork::GetTitle()
{
   return title;
}
int Artwork::GetYearCreated()
{
   return yearCreated;
}
void Artwork::PrintInfo()
{
   artist.PrintInfo();
   cout << "Title:" << " " << title << "," << " " << yearCreated;
}




// TODO: Define second constructor to initialize
//       private fields (title, yearCreated, artist)

// TODO: Define get functions: GetTitle(), GetYearCreated()

// TODO: Define PrintInfo() function
