#include "crow.h"

CRow::CRow(const base& it):
    base( it )
{
}

TCell CRow::operator [] (int index)
{
return (*this)->second.operator [] ( index );
}

TCell CRow::operator [] (const TString& name)
{
return (*this)->second.operator [] ( name );
}

int CRow::save(std::stringstream& sheet) const
{
return (*this)->second.save( sheet );
}

