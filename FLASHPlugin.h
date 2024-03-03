#ifndef FLASHPLUGIN_H
#define FLASHPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class FLASHPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "FLASH";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
