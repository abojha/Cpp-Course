#include "landlord.h"


///////////////////////////// global variables/functions ////////////////////////////
void getaLine(string& inStr) //get line of text
{
    char temp[21];
    cin.get(temp, 20, '\n');
    cin.ignore(20, '\n');
    inStr = temp;
}
//------------------------------------------------------------------------------------
char getChar() //get a character
{
    char ch = cin.get();
    cin.ignore(80, '\n');
    return ch;
}

///////////////////////////// methods for class tenant ////////////////////////////
tenant :: tenant(string n, int aNo):name(n), aptNumber(aNo)
    {/*empty*/}
//----------------------------------------------------------------------------------
tenant :: ~tenant(){}
//----------------------------------------------------------------------------------
int tenant :: getAptNumber()
    {return aptNumber;}
//----------------------------------------------------------------------------------
bool operator < (const tenant& t1, const tenant& t2)
    { return t1.name < t2.name; }
//----------------------------------------------------------------------------------
bool operator == (const tenant& t1, const tenant& t2)
    { return t1.name == t2.name;}
//----------------------------------------------------------------------------------
ostream& operator << (ostream& s, const tenant& t1)
{
    s << t1.aptNumber << "\t" << t1.name << endl;
    return s; 
}
//----------------------------------------------------------------------------------

/////////////////////// method for class tenantInputScreen ////////////////////////
void tenantInputScreen :: getTenant()
{
    cout << "Enter tenant's name (abhay ojha) ";
    getaLine(tName);
    cout << "Enter tenant's apartment number ";
    cin >> aptNo;
    cin.ignore(80, '\n');
    tenant *ptrTenant = new tenant(tName, aptNo);
    ptrTenantList->insertTenant(ptrTenant); //send to tenant list
}
//----------------------------------------------------------------------------------
bool compareTenants :: operator()  (tenant *ptrT1, tenant *ptrT2) const
    {return *ptrT1 < *ptrT2;}
//----------------------------------------------------------------------------------

//////////////////// methods for class tenantList //////////////////////
tenantList :: ~tenantList() //destructor
{
    while(!setPtrsTens.empty())
    {
        iter = setPtrsTens.begin();
        delete *iter;
        setPtrsTens.erase(iter);
    }
} //end ~tenantList()
//----------------------------------------------------------------------------------
void tenantList :: insertTenant(tenant *PtrT)
{
    setPtrsTens.insert(PtrT); // insert

}
//---------------------------------------------------------------------------------
int tenantList :: getAptNo(string tName) //name on list?
{
    int aptNo;
    tenant dummy(tName, 0);
    iter = setPtrsTens.begin();
    while (iter != setPtrsTens.end())
    {
        aptNo = (*iter)->getAptNumber(); //look for tenant
        if(dummy == **iter++)
            return aptNo;
        
        return -1;
    }
}
//---------------------------------------------------------------------------------
void tenantList :: display()
{
    cout << "\nAPt#/tTenant name\n-------------- \n";
    if(setPtrsTens.empty())
    {
        cout << "***No Tenants***\n";
    }
    else{
        iter = setPtrsTens.begin();
        while(iter != setPtrsTens.end())
        {
            cout << **iter++;
        }
    } //end display();
}


/////////////////////// methods for class rentRows ///////////////////////
rentRow :: rentRow(int ap) : aptNo(ap)
{
    fill(&rent[0], &rent[12], 0.0);
}
//----------------------------------------------------------------------
void rentRow ::  setRent(int month, float amount)
    { rent[month] = amount;}
//----------------------------------------------------------------------
float rentRow :: getSumofRow()  //sum of rent of row
    { return accumulate(&rent[0], &rent[12], 0);}
//----------------------------------------------------------------------
bool operator < (const rentRow& r1, const rentRow& r2)
    {return r1.aptNo < r2.aptNo;}
//----------------------------------------------------------------------
bool operator == (const rentRow& r1, const rentRow& r2)
    {return r1.aptNo == r2.aptNo;}
//----------------------------------------------------------------------
ostream& operator << (ostream& s, const rentRow& an)
{
    s << an.aptNo << '\t';  //print apartment number
    for(int i = 0; i <  12; i++)
    {
        if(an.rent[i] == 0)
        {
            cout << " 0 ";
        }
        else
        { 
            cout << an.rent[i] << "  ";
        }
    }
    s << endl;
    return s;

}

/////////////////////////////////////////////////////////////////////////
bool compareRows :: operator () (rentRow *ptrR1, rentRow *ptrR2 )const
{
    return ptrR1 < ptrR2;
}
///////////////////method for rentRecord ///////////////////////////////
rentRecord :: ~rentRecord()
{
    while(!setPtrsRR.empty())
    {
        iter = setPtrsRR.begin();
        delete *iter;
        setPtrsRR.erase(iter);
    }
}
//----------------------------------------------------------------------
void rentRecord :: insertRent(int ap, int month, float am)
{
    rentRow searchRow(ap);
    iter = setPtrsRR.begin();
    while(iter != setPtrsRR.end())
    {
        if(searchRow == **iter)
        {   
            (*iter)->setRent(month, am);
            return;
        }
        else
            iter++;
    }
    rentRow *ptrRow = new rentRow(ap);
    ptrRow->setRent(month, am);
    setPtrsRR.insert(ptrRow);
} //end of insertRen

//----------------------------------------------------------------------
void rentRecord :: display()
{
    cout << "\nAptNo\t Jan  Feb  Mar  Apr  May  June  July  Aug  Sept  Oct  Nov  Dec"<< endl;
    if(setPtrsRR.empty())
        cout << "No Rent Record";
    
    else
    {
        iter = setPtrsRR.begin();
        while(iter != setPtrsRR.end())
        {
            cout << **(iter)++;
        }
    }
}
//-----------------------------------------------------------------------
float rentRecord :: getSumofRent()
{
    float sumofrent = 0.0;
    if(setPtrsRR.empty())
        cout << "No Rent Record";
    
    else
    {
        iter = setPtrsRR.begin();
        while(iter != setPtrsRR.end())
        {
            sumofrent += (*iter)->getSumofRow();
        }
    }
    return sumofrent;
}
//------------------------------------------------------------------------
////////////////////method for classrentInputScreen//////////////////////
void rentInputScreen :: getRent()
{
    cout << "Enter Tenant's Name";
    getaLine(rentername);
    aptNo = ptrTenantList->getAptNo(rentername);

    if(aptNo > 0)
    {
        cout << "Enter amount paid : ";
        cin >> rentPaid;
        cin.ignore(80, '\n');
        cout << "Enter month rent is for (1-12);";
        cin>>month;
        cin.ignore(80, '\n');
        ptrRentRecord->insertRent(aptNo, --month, rentPaid);
    }
    else
    {
        cout << "No tenant with this Name" << endl;
    }
} //end of getRent     

////////////////// methods for class expense/////////////////////////
bool operator < (const expense& e1, const expense& e2)
{
    if(e1.month == e2.month)
    {
        return (e1.day < e2.day);
    }
    else
    {
        return (e1.month < e2.month);
    }
}
//-------------------------------------------------------------------
bool operator == (const expense& e1, const expense& e2)
{
    if(e1.month == e2.month)
    {
        return (e1.day == e2.day);
    }
}
//-------------------------------------------------------------------
ostream& operator << (ostream& s, const expense& e)
{
    s << e.month << " /" << e.day << "\t" << e.category << "\t" << e.payee << "\t" << e.amount;
}
//-------------------------------------------------------------------
bool compareDates :: operator() (expense* e1, expense* e2) const
{
    return (*e1 < *e2);
}
//-------------------------------------------------------------------
bool compareCategories :: operator() (expense* e1, expense* e2) const
{
    return (e1->category < e2->category);
}


///////////////////// method for classExpenseRecord /////////////////
expenseRecord :: ~expenseRecord()
{
    while(!vectExpPtr.empty())
    {
        iter = vectExpPtr.begin();
        delete *iter;
        vectExpPtr.erase(iter);
    }
}
//-------------------------------------------------------------------
void expenseRecord :: insertExpense(expense* ptrEx)
{
    vectExpPtr.push_back(ptrEx);
}
//-------------------------------------------------------------------
void expenseRecord :: display()
{
    cout << "\nDate\tPayee\t\tAmount\tCategory\n"
    << "----------------------------------------\n";
    if(vectExpPtr.size() == 0)
    {
        cout << "No Expense Record";
    }
    else
    {
        sort(vectExpPtr.begin(), vectExpPtr.end(), compareDates());
        iter = vectExpPtr.begin();
        while(iter != vectExpPtr.end())
        {
            cout << **iter++;
        }
        
    }
}
//-------------------------------------------------------------------
float expenseRecord :: displaySummary()
{
    float AllExpenses = 0.0;
    if(vectExpPtr.size() == 0)
    {
        cout << "\nAll Categories\t 0\n";
    }
    //sort by category
    sort(vectExpPtr.begin(), vectExpPtr.end(), compareCategories());

    iter = vectExpPtr.begin();
    string tempcat = (*iter)->category;
    float sumcat = 0.0;

    while(iter!=vectExpPtr.end())
    {
        if(tempcat == (*iter)->category) //same category
        {
            sumcat += (*iter)->amount;
        }
        else //different categroy
        {
            cout << '\t' << tempcat << '\t' << sumcat << endl;
            AllExpenses += sumcat;
            tempcat = (*iter)->category;
            sumcat = (*iter)->amount;
        }
        iter++;
    } //end of while
    AllExpenses += sumcat;
    cout << '\t' << tempcat << '\t' << sumcat << endl;
    return AllExpenses; 
} //end of expenseRecord

////////////// method for class expenseInputScreen /////////////////
expenseInputScreen :: expenseInputScreen(expenseRecord *ptrER) : ptrExpenseRecord(ptrER)
{/*empty*/}

void expenseInputScreen :: getExpense()
{
    int month, day;
    string category, payee;
    float amount;
    cout << "Enter a month (1-12)";
    cin >> month;
    cin.ignore(80, '\n');
    cout << "Enter a day (1-31)";
    cin >> day;
    cin.ignore(80, '\n');
    cout << "Enter name of Payee";
    cin >> payee;
    cin.ignore(80,  '\n');
    cout << "Enter Category";
    cin >> category;
    cin.ignore(80, '\n');
    cout << "Enter Amount";
    cin >> amount;
    cin.ignore(80, '\n');

    expense *ptrExpense = new expense(month, day, category, payee, amount);
    ptrExpenseRecord->insertExpense(ptrExpense);
}
//-------------------------------------------------------------------


//////////////// method for classAnnualRecord ///////////////////////
annualReport :: annualReport(rentRecord *pRR, expenseRecord *pER): ptrRR(pRR), ptrER(pER){/*empty*/}
//-------------------------------------------------------------------
void annualReport :: getReport()
{
    cout << "Annual Report\n-----------------\n";
    cout << "Income\n";
    cout << "rent\t\t";
    rent = ptrRR->getSumofRent();
    cout << rent;
    cout << "\nExpense\n";
    expense = ptrER->displaySummary();
    cout << "\nBalance\t\t\t" << rent - expense << endl;

}

/////////////////// method for class userInterface //////////////////
userInterface :: userInterface()
{
    //these record exists for lifetime of the program
    ptrTenantList = new tenantList;
    ptrRentRecord = new rentRecord;
    ptrExpenseRecord = new expenseRecord;
}
//-------------------------------------------------------------------
userInterface :: ~userInterface()
{
    delete ptrTenantList;
    delete ptrRentRecord;
    delete ptrExpenseRecord;
}
//-------------------------------------------------------------------
void userInterface :: Interact()
{
    while(true)
    {
        cout << "Enter 'i' to input data\n"
             << "'d' to display report\n"
             << "'q' to quit" << endl;
            
        ch = getChar();

        if(ch == 'i')
        {
            cout << "Enter 't' to add tenant\n"
                 << "'r' to add rent\n"
                 << "'e' to add expense" << endl;
                
            ch = getChar();
            switch(ch)
            {
                //inputscreen exist only while being used
                case 't':
                    ptrTenantInputScreen = new tenantInputScreen(ptrTenantList);
                    ptrTenantInputScreen->getTenant();
                    delete ptrTenantInputScreen;
                    break;
                case 'r':
                    ptrRentInputScreen = new rentInputScreen(ptrTenantList, ptrRentRecord);
                    ptrRentInputScreen->getRent();
                    delete ptrRentInputScreen;
                    break;
                case 'e':
                    ptrExpenseInputScreen = new expenseInputScreen(ptrExpenseRecord);
                    ptrExpenseInputScreen->getExpense();
                    delete ptrExpenseInputScreen;
                    break;
                default:
                    cout << "Invalid Input";
                    break;

            }
        }
        else if(ch == 'd')
        {
            cout << "Enter 't' to display tenants\n"
                 << "      'r' to display rent\n"
                 << "      'e' to display expense\n"
                 << "      'a' to display annual report";
            ch = getchar();
            switch(ch)
            {
                case 't': ptrTenantList->display(); break;
                case 'r': ptrRentRecord->display(); break;
                case 'e': ptrExpenseRecord->display(); break;
                case 'a': ptrAnnualReport = new annualReport(ptrRentRecord, ptrExpenseRecord);
                ptrAnnualReport->getReport();
                delete ptrAnnualReport;
                break;
                default: cout << "Enter Valid Option " << endl;
            }
        }
        else if (ch == 'q')
            return;
        else
        {
            cout << "Enter Valid Option " << endl;
        }
    } //end of while
} // end of interact
///////////////////////// end of file landlord.cpp //////////////////