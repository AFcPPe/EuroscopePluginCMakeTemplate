#ifndef TOPSKYARROWMARKER_LIBRARY_H
#define TOPSKYARROWMARKER_LIBRARY_H

#include "lib/include/EuroScopePlugIn.h"

void    __declspec ( dllexport )    EuroScopePlugInInit (EuroScopePlugIn :: CPlugIn ** ppPlugInInstance );

void    __declspec ( dllexport )    EuroScopePlugInExit (void) ;
#endif //TOPSKYARROWMARKER_LIBRARY_H
