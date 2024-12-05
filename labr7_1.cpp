#include<iostream>
#include<string>

using namespace std;

string tolower(string tl){
    int i=0;
    string y="";
    int letter = tl.size();
    while(i<letter){
        if(tl[i]>= 'A' && tl[i] <= 'Z'){
            y+= tl[i]+ ('a'-'A') ;
        } else{
            y+= tl[i];
        }
        i++;
    }
    return y;
}


string reverse(string r){
    int letter=r.size();
    int i=letter-1;
    string y = "";
    
    while(i>=0){
        char c=r[i];
        y+=c;
        i--;
    }
    return y;

}

string palin(string og, string rev){
    if(og==rev){
        return "Yes";
    }
    else{
        return "No";
    }
}



int main(){
    string text;
    cout << "Input text: ";
    cin >> text;

    string lower = tolower(text);
    string reversed = reverse(text);
    string reversed2 = reverse(lower);
    string palind = palin(lower, reversed2);

    cout << "Reversed text: " << reversed << endl;
    cout << "Palindrome: " << palind;

    return 0;
}