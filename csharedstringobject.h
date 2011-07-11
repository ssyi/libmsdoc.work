#ifndef CSHAREDSTRINGOBJECTH
#define CSHAREDSTRINGOBJECTH

#include "cstring.h"
#include "cformula.h"

class CSharedStringObject;
typedef CSharedStringObject TSharedStringObject;

class CSharedStringObject:
    public std::string
{
protected:

public:
    CSharedStringObject(const TString& string);
    CSharedStringObject(const TFormula& formula);
};

#endif
