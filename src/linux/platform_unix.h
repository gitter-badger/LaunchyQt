/*
  Launchy: Application Launcher
  Copyright (C) 2008  Josh Karlin
  
  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.
  
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#pragma once

#include "AppBase.h"
#include "platform_unix_util.h"

class PlatformUnix :  public AppBase {
    Q_OBJECT
 public:
    PlatformUnix(int& argc, char** argv);
    virtual ~PlatformUnix();
    
    void setPreferredIconSize(int size) { size = size; return; }

    QString GetSettingsDirectory() { return ""; }
    QList<Directory> getDefaultCatalogDirectories();
    
    
    void AddToNotificationArea() {}
    void RemoveFromNotificationArea() {}

    virtual QHash<QString, QList<QString>> getDirectories();
	virtual QString expandEnvironmentVars(QString txt);

    bool supportsAlphaBorder() const;
    /*
    QIcon icon(const QFileInfo& info) {
    	shared_ptr<UnixIconProvider> u(dynamic_pointer_cast<UnixIconProvider>(icons));
  	  	return u->getIcon(info);
//		return ((UnixIconProvider*) icons.get())->getIcon(info); 
    }
    */

    virtual void alterItem(CatItem*);
};



