#define d 256 

//Function to check if the pattern is present in string or not.
bool search(string pat, string txt, int q)
{
if(txt.find(pat)==string::npos)
return false;

return true;
}
