//header file for landlord.cpp
#include<iostream>
#include<vector>
#include<set>
#include<string>    
#include<algorithm>
#include<numeric>
using namespace std;

///////// global method /////////
void getaLine(string& instr); // get line of text
char getChar();     //get a character

////////// class tenant //////////
class tenant
{
    private:
        string name; //tenant's name
        int aptNumber; // tenant's apartment number
        //other tenant information (phone, etc. ) could go here
    
    public:
        tenant(string n, int aNo);
        ~tenant();
        int getAptNumber();
        //needed for use in 'set'
        friend bool operator < (const tenant&, const tenant&);
        friend bool operator == (const tenant&, const tenant&);
        //for I/O
        friend ostream& operator << (ostream&, const tenant&);

};// end class tenant
////////// class compare tenant /////////
class compareTenants //function object --compare tenants
{
    public:
        bool operator () (tenant*, tenant*) const;
};

////////// class tenant List //////////
class tenantList
{
    private:
        //set of pointers to tenant
        set<tenant*, compareTenants> setPtrsTens;
        set<tenant*, compareTenants>::iterator iter;
        
    public:
        ~tenantList(); //destructor (delete tenants)
        void insertTenant(tenant*); //put tenant on list
        int getAptNo(string); // return apartment number
        void display(); //display tenant list
};//end class tenantList

////////// class tenantInputScreen /////////
class tenantInputScreen
{
    private:
        tenantList* ptrTenantList;
        string tName;
        int aptNo;
    public:
        tenantInputScreen(tenantList* ptrTL) :ptrTenantList(ptrTL){}
        void getTenant();
}; //end class tenantInputScreen


////////////////// class Rentrow ///////////////
class rentRow
{
    int aptNo;
    float rent[12];

    public:
        rentRow(int);   //1-arg constructor
        void setRent(int, float);  //record for one month
        float getSumofRow();        //get sum of rent of one row
        friend bool operator < (const rentRow&, const rentRow&);
        friend bool operator == (const rentRow&, const rentRow&);
        friend ostream& operator << (ostream &, const rentRow&);
}; //end of class rentRow

/////////////// Compare Rows ////////////////////
class compareRows
{
    public:
        bool operator () (rentRow*, rentRow*) const;
};

////////////// class rentRecord ///////////////
class rentRecord
{
    private:
        // set of pointer to rentRow
        set<rentRow*, compareRows> setPtrsRR;
        set<rentRow*, compareRows> :: iterator iter;
    
    public:
        ~rentRecord();
        void insertRent(int, int, float);
        void display();
        float getSumofRent();
}; //end of class rentRecord


/////////////// class rentInputScreen ////////////
class rentInputScreen
{
    private:
        tenantList * ptrTenantList;
        rentRecord *ptrRentRecord;
        string rentername;
        float rentPaid;
        int month;
        int aptNo;
    
    public:
        rentInputScreen(tenantList* ptrTL, rentRecord* ptrRR) : ptrTenantList(ptrTL), ptrRentRecord(ptrRR) {}
        void getRent();
};  // end of class rentInputScreen


///////////////// Class expense /////////////////
class expense
{
    public:
    int month, day;
    string category, payee;
    float amount;
        expense(){/*empty*/}
        expense(int m, int d, string c, string p, float amount) : month(m), day(d), category(c), payee(p), amount(amount){/*empty*/}
        //needed for use in set
        friend bool operator < (const expense&, const expense&);
        friend bool operator == (const expense&, const expense&);
        //needed for cout 
        friend ostream& operator << (ostream &, const expense&);
};//end of class expense
///////////////////////////////////////////////////////////////////////
class compareDates
{
    public:
        bool operator () (expense*, expense*) const;
};
/////////////////////////////////////////////////////////////////////////
class compareCategories
{
    public:
        bool operator () (expense*, expense*) const;
};

class expenseRecord
{
    //vector of pointer to expense
    vector<expense*> vectExpPtr;
    vector<expense*>:: iterator iter;
    public:
        ~expenseRecord();
        void insertExpense(expense*);
        void display();
        float displaySummary();

}; //end of class expenseRecord


////////////////////////////// class expenseInputScreen /////////////////////////////
class expenseInputScreen
{
    expenseRecord * ptrExpenseRecord;
    public:
        expenseInputScreen(expenseRecord*);
        void getExpense();
}; //end of class expenseInput Screen


//////////////////////////// class annualReport /////////////////////////////////////
class annualReport
{
    rentRecord *ptrRR;
    expenseRecord *ptrER;
    float rent, expense;
    public:
        annualReport(rentRecord*, expenseRecord*);
        void getReport();
}; //end of class annualReport


/////////////////////////// class userInterface /////////////////////////////////////
class userInterface
{
    tenantList *ptrTenantList;
    tenantInputScreen *ptrTenantInputScreen;
    rentRecord *ptrRentRecord;
    rentInputScreen *ptrRentInputScreen;
    expenseRecord *ptrExpenseRecord;
    expenseInputScreen *ptrExpenseInputScreen;
    annualReport *ptrAnnualReport;
    char ch;

    public:
        userInterface();
        ~userInterface();
        void Interact();
}; //end of class userInterface





/////////////////////// end of file landlord.h //////////////////////////////////////