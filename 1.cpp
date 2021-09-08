#include<iostream>
#include<string.h>
using namespace std;
class registration{
    private:
    int nid, veriCode = 123456, mobileNum;
    public:
    int Accountbalance = 10;
    string name;
    
    int signUpOrSignIn(){
        int choose;
        cout<<"<<- Welcome to Bkash -->"<<endl<<endl;
        cout<<"Press-1 for signUp."<<endl;
        cout<<"Press-2 for logIn."<<endl;
        cout<<"Now press here = ";
        cin>>choose;
        switch (choose)
        {
        case 1:
            signUp(veriCode, nid);
            break;
        case 2:
            logIn(veriCode, nid);
            break;
        default:
            break;
        }
    }
    int askMobileNumber(int x);
    int onlyNumber();
    int balance(int x);
    int askMenu();
    int SendMoney();
    int MobileRecharge();
    int AmountVerify(string msg);
    int cashOut();
    int Payment();
    int AddMoney();
    int PayBill();
    int Savings();
    int Ticket();
    int Shopping();
    int Donation();

    int signUp(int veriCode, int nid){      //call by 1 for signup calculation
        askMobileNumber(1);
        cout<<endl;cout<<"!!!Terms and condition!!!!";cout<<endl<<endl;
        cout<<"We are going to collect your present address, permanent address, profile picture from your NID."<<endl;
        cout<<"Enter your NID number = ";
        cin>>nid;
        cout<<endl;
        cout<<"SignUp successful!"<<endl;
        balance(1);
    }
    int logIn(int veriCode, int nid){       //call by 0 for login calculation
        askMobileNumber(0);
        balance(0);
    }
};      //!class close

int registration :: balance(int x){
    if(x == 0){
        cout<<endl<<"\tYour account balance: "<<Accountbalance;
        askMenu();
    }
    else if(x == 1){
        Accountbalance = 0;
        cout<<"Now you need to cash in first."<<endl;
        cout<<"Enter cashIn amount = ";
        cin>>Accountbalance;  cout<<endl;
        cout<<"CashIn successful"<<endl;
        cout<<"Your Account Balance = "<<Accountbalance<<endl;
        askMenu();
    }
}
int registration :: onlyNumber(){
    int number;
    cout<<"Enter number = ";
    cin>>number;    cout<<endl;
}
int registration :: askMobileNumber(int x){
    int veriCodeUserSignUp;
    cout<<"Enter your mobile number = ";
    cin>>mobileNum; cout<<endl;
    cout<<"Enter verification code(123456) that has been sent to your mobile number = ";
    label:
    cin>>veriCodeUserSignUp;
    if (veriCode == veriCodeUserSignUp)
    {
        if(x == 1){}
        else{   cout<<"Login successful!"<<endl;    }
    }
    else{
        cout<<"Invalid code. Type again = ";
        goto label;
    }
}
int registration :: AmountVerify(string msg){
    int amount;
    cout<<"Enter amount = ";
    label:
    cin>>amount;
    cout<<endl;
    if (amount > Accountbalance)
    {
       cout<<"Insufficient balance. Please provide right amount again = ";
       goto label;
    }
    else if(msg == "SM"){
        cout<<"Send money successful."<<endl;
    }
    else if(msg == "Recharge"){
        cout<<amount<<" taka recharge Successful";
    }
}
int registration :: askMenu(){
    int choice;
    cout<<endl<<endl<<"<-- Now Choose your option -->"<<endl;
    cout<<"Press-1 for Send Money"<<endl;
    cout<<"Press-2 for Mobile Recharge"<<endl;
    cout<<"Press-3 for Cash Out"<<endl;
    cout<<"Press-4 for Payment"<<endl;
    cout<<"Press-5 for Add Money"<<endl;
    cout<<"Press-6 for Pay Bill"<<endl;
    cout<<"Press-7 for Savings"<<endl;
    cout<<"Press-8 for Ticket"<<endl;
    cout<<"Press-9 for Shopping"<<endl;
    cout<<"Press-10 for Donation"<<endl;
    cout<<"Now press = ";
    cin>>choice;
    
    if (choice == 1)
    {
        SendMoney();
    }
    else if(choice == 2){
        MobileRecharge();
    }
    else if(choice == 3){
        cashOut();
    }
    else if(choice == 4){
        Payment();
    }
    else if(choice == 5){
        AddMoney();
    }
    else if(choice == 6){
        PayBill();
    }
    else if(choice == 7){
        Savings();
    }
    else if(choice == 8){
        Ticket();
    }
    else if(choice == 9){
        Shopping();
    }
    else if(choice == 10){
        Donation();
    }

}
int registration :: SendMoney(){
    onlyNumber();
    AmountVerify("SM");
}

int registration :: MobileRecharge(){
    int choice, number, amount;
    cout<<endl<<endl<<"<-- Choose Sim -->"<<endl;
    cout<<"Press-1 for GP"<<endl;
    cout<<"Press-2 for GP(Skitto)"<<endl;
    cout<<"Press-3 for Airtel"<<endl;
    cout<<"Press-4 for Robi"<<endl;
    cout<<"Press-5 for Banglalink"<<endl;
    cout<<"Press-6 for Teletalk"<<endl;
    cout<<"Now press = ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter 11 digit of your mobile number = 017";
        cin>>number;    cout<<endl;
        AmountVerify("Recharge");
        break;
    case 2:
        cout<<"Enter 11 digit of your mobile number = 017";
        cin>>number;    cout<<endl;
        AmountVerify("Recharge");
        break;
    case 3:
        cout<<"Enter 11 digit of your mobile number = 016";
        cin>>number;    cout<<endl;
        AmountVerify("Recharge");
        break;
    case 4:
        cout<<"Enter 11 digit of your mobile number = 014";
        cin>>number;    cout<<endl;
        AmountVerify("Recharge");
        break;
    case 5:
        cout<<"Enter 11 digit of your mobile number = 019";
        cin>>number;    cout<<endl;
        AmountVerify("Recharge");
        break;
    case 6:
        cout<<"Enter 11 digit of your mobile number = 015";
        cin>>number;    cout<<endl;
        AmountVerify("Recharge");
        break;
    default:
        break;
    }
}
int registration :: cashOut(){

}
int registration :: Payment(){

}
int registration :: AddMoney(){

}
int registration :: PayBill(){

}
int registration :: Savings(){

}
int registration :: Ticket(){

}
int registration :: Shopping(){

}
int registration :: Donation(){

}

//!Main function start
int main(){
    registration registrationObj;
    registrationObj.signUpOrSignIn();
    return 0;
}