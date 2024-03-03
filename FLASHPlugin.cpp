#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "FLASHPlugin.h"

void FLASHPlugin::input(std::string file) {
   readParameterFile(file);
}

void FLASHPlugin::run() {}

void FLASHPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "flash "+PluginManager::addPrefix(myParameters["fastq1"])+" "+PluginManager::addPrefix(myParameters["fastq2"])+" -o "+file;
std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<FLASHPlugin> FLASHPluginProxy = PluginProxy<FLASHPlugin>("FLASH", PluginManager::getInstance());
