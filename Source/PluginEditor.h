/*
 ==============================================================================
 
 This file was auto-generated!
 
 It contains the basic framework code for a JUCE plugin editor.
 
 ==============================================================================
 */

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "BinaryData.h"
//==============================================================================
/**
 */
class Olaf: public LookAndFeel_V4{
public:
    void drawRotarySlider(Graphics &g,int x, int y, int w, int h, float sliderpos,float startangle, float endangle,Slider &slider) override{
        
        const AffineTransform rotator;
        
        Image knob0 = ImageCache::getFromMemory(BinaryData::knob_3_png, BinaryData::knob_3_pngSize);
        Image knob1 = ImageCache::getFromMemory(BinaryData::knob_2_png, BinaryData::knob_2_pngSize);
        Image knob2 = ImageCache::getFromMemory(BinaryData::knob_1_png, BinaryData::knob_1_pngSize);
        Image knob3 = ImageCache::getFromMemory(BinaryData::knob_8_png, BinaryData::knob_8_pngSize);
        Image knob4 = ImageCache::getFromMemory(BinaryData::knob_7_png, BinaryData::knob_7_pngSize);
        Image knob5 = ImageCache::getFromMemory(BinaryData::knob_6_png, BinaryData::knob_6_pngSize);
        Image knob6 = ImageCache::getFromMemory(BinaryData::knob_5_png, BinaryData::knob_5_pngSize);
        
        if(slider.getValue()>=0 && slider.getValue()<=1){
            g.drawImageTransformed(knob0, rotator);
        }
        else if(slider.getValue()>1 && slider.getValue()<=2){
            g.drawImageTransformed(knob1, rotator);
        }
        else if(slider.getValue()>2 && slider.getValue()<=3){
            g.drawImageTransformed(knob2, rotator);
        }
        else if(slider.getValue()>3 && slider.getValue()<=4){
            g.drawImageTransformed(knob3, rotator);
        }
        else if(slider.getValue()>4 && slider.getValue()<=5){
            g.drawImageTransformed(knob4, rotator);
        }
        else if(slider.getValue()>5 && slider.getValue()<=6){
            g.drawImageTransformed(knob5, rotator);
        }
        else if(slider.getValue()>6 && slider.getValue()<=7){
            g.drawImageTransformed(knob6, rotator);
        }
    }
};
class NewProjectAudioProcessorEditor  : public AudioProcessorEditor,
public Slider::Listener
{
public:
    NewProjectAudioProcessorEditor (NewProjectAudioProcessor&);
    ~NewProjectAudioProcessorEditor();
    
    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    void sliderValueChanged(Slider *slider)override
    {
        if(slider==&knob1){
            processor.choice = (int)slider->getValue();
        }
        else{
            processor.wetLevel = slider->getValue()/6;
        }
        
    }
    Olaf olaf;
    Slider knob1;
    Slider knob2;
    
    Image background_image = ImageCache::getFromMemory(BinaryData::cassette_v2_png,BinaryData::cassette_v2_pngSize);
    
private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    NewProjectAudioProcessor& processor;
    
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NewProjectAudioProcessorEditor)
};
