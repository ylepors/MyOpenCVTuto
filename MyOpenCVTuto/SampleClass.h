//
//  SampleClass.h
//  MyOpenCVTuto
//
//  Created by Yves Le Pors on 12/08/12.
//  Copyright (c) 2012 Yves Le Pors. All rights reserved.
//

#ifndef __MyOpenCVTuto__SampleClass__
#define __MyOpenCVTuto__SampleClass__

#include <iostream>

//! Base class for all samples
class SampleBase
{
public:
    //! Gets a sample name
    virtual std::string getName() const = 0;
    
    //! Returns a detailed sample description
    virtual std::string getDescription() const = 0;
    
    //! Returns true if this sample requires setting a reference image for latter use
    virtual bool isReferenceFrameRequired() const = 0;
    
    //! Sets the reference frame for latter processing
    virtual void setReferenceFrame(const cv::Mat& reference) = 0;
    
    //! Processes a frame and returns output image
    virtual bool processFrame(const cv::Mat& inputFrame, cv::Mat& outputFrame) = 0;
    
    const std::vector& getOptions();
    
protected:
    void registerOption(std::string name, bool  * value);
    void registerOption(std::string name, int   *  value, int min, int max);
    void registerOption(std::string name, float *  value, float min, float max);
    
private:
    std::vector m_options;
};

#endif /* defined(__MyOpenCVTuto__SampleClass__) */
