#include "../std_lib_facilities.h"

void in_file_text(string& name_file, vector<string>&vs);
void reverse_word_order(vector<string>& vs1, vector<string>& vs2);
string Change_order_characters(string& str);
void out_file_text(vector<string>& vs, string& name_file);

int main()
{
    vector<string>vs;
    cout << "Enter file name:\n";
    string name;
    cin >> name;
    in_file_text(name, vs);
    return 0;
}

void in_file_text(string& name_file, vector<string>&vs)
{
    ifstream ist(name_file);
    if(!ist) error("Unable to open input file ", name_file);
    ist.exceptions(ist.exceptions() | ios_base::badbit);
    for(string temp; ist >> temp;)
    {
        vs.push_back(temp);
    }
}