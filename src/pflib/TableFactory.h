/* 

                          Firewall Builder

                 Copyright (C) 2005 NetCitadel, LLC

  Author:  Vadim Kurland     vadim@vk.crocodile.org

  $Id$

  This program is free software which we release under the GNU General Public
  License. You may redistribute and/or modify this program under the terms
  of that license as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 
  To get a copy of the GNU General Public License, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/

#ifndef __TABLEFACTORY_HH
#define __TABLEFACTORY_HH

#include <fwbuilder/libfwbuilder-config.h>
#include "fwcompiler/PolicyCompiler.h"
#include <fwbuilder/FWException.h>

#include <list>
#include <map>

namespace libfwbuilder {
    class FWObject;
    class FWObjectDatabase;
};    

namespace fwcompiler {

    class TableFactory {
        libfwbuilder::FWObjectDatabase *dbroot;
        libfwbuilder::FWObject         *persistent_tables;

        std::map<std::string,libfwbuilder::FWObject*> tables;
        std::map<std::string,std::string>             tblnames;
        std::string generateTblID(libfwbuilder::RuleElement *re);
        std::string ruleSetName;

public:
        TableFactory();

        void init(libfwbuilder::FWObjectDatabase *_dbroot);

        void setRuleSetName(const std::string &rsn="") { ruleSetName=rsn; }

        void registerTable(const std::string& tblname,
                           const std::string& tblid,
                           libfwbuilder::FWObject *tbl) throw(libfwbuilder::FWException);
        void createTablesForRE(libfwbuilder::RuleElement *re,
                               libfwbuilder::Rule        *rule);

        std::string PrintTables();

    };
};


#endif
