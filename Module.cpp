#include "Module.h"

ostream & operator<< (ostream & os, const Module & m)
{
    os << "(" << m._PondCE << ", " << m._PondDE << ", " << m._PondPROJET << ", " << m._PondTP << ")";
	return os;
}

istream & operator>> (istream & is, const Module & m)
{
    is >> m._PondCE;
    is >> m._PondDE;
    is >> m._PondPROJET;
    is >> m._PondTP;
    return is;
}

Module::Module(double pondCE, double pondDE, double pondPROJET, double pondTP) : _PondCE(pondCE), _PondDE(pondDE), _PondPROJET(pondPROJET), _PondTP(pondTP)
{

}
