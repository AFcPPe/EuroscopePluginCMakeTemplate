#pragma once
#include "lib/include/EuroScopePlugIn.h"
#include <string>


using namespace std;
using namespace EuroScopePlugIn;

#define MY_PLUGIN_NAME		"TopskyArrowMarker"
#define MY_PLUGIN_VERSION   "0.0.1"
#define MY_PLUGIN_DEVELOPER "Harry Xiong"
#define MY_PLUGIN_COPYRIGHT "All rights reserved"


class ESPlugin : public EuroScopePlugIn::CPlugIn
{
private:


public:
	ESPlugin();
	virtual ~ESPlugin();

};