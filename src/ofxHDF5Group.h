//
//  ofxHDF5Group.h
//  ofxHDF5
//
//  Created by Elias Zananiri on 2016-02-01.
//
//

#pragma once

#include "H5Cpp.h"

#include "ofMain.h"

#include "ofxHDF5Container.h"
#include "ofxHDF5DataSet.h"

namespace ofxHDF5
{
    class Group : public Container
    {
    public:
        Group();
        ~Group();

        bool open(const string& name, H5::CommonFG *fg);
        virtual void close();

        virtual GroupPtr loadGroup(const string& name);
        virtual DataSetPtr loadDataSet(const string& name);

        H5::Group& getH5();

    protected:
        H5::Group h5_group;
    };
}
