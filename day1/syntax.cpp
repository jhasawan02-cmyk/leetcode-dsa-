// write a program to show number from 1 to 10000 using for and while loop using namespace std

//for loop
# include<iostream>
using namespace std;

void count ( int n){
        for (n; n<=10000;n++){
        cout<<n<<endl;
        }
};

void whilecount(int m){
    while(m <= 10000){
    cout<<m<<endl;
    m++;
    }
}

int main(){
    
    cout<<"for loop starts"<<"";
    count(1);

    cout<<"while loop starts"<<"";
    whilecount(1);

    return 0;
};
