/*
 ==============================================================================
 
 This file was auto-generated!
 
 It contains the basic framework code for a JUCE plugin editor.
 
 ==============================================================================
 */

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
NewProjectAudioProcessorEditor::NewProjectAudioProcessorEditor (NewProjectAudioProcessor& p)
: AudioProcessorEditor (&p), processor (p)
{
    addAndMakeVisible(knob1);
    knob1.setRange(0.0, 6.1);
    knob1.setSize(65,65);
    knob1.setCentrePosition(74, 101);
    knob1.setSliderStyle(Slider::SliderStyle::Rotary);
    knob1.setTextBoxStyle(Slider::NoTextBox, true, 30, 30);
    knob1.setLookAndFeel(&olaf);
    knob1.addListener(this);
    knob1.setValue(0.0);
    
    addAndMakeVisible(knob2);
    knob2.setRange(0.0, 6.1);
    knob2.setSize(65, 65);
    knob2.setCentrePosition(246, 101);
    knob2.setSliderStyle(Slider::SliderStyle::Rotary);
    knob2.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
    knob2.setLookAndFeel(&olaf);
    knob2.addListener(this);
    knob2.setValue(2.0);
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (300,192);
}

NewProjectAudioProcessorEditor::~NewProjectAudioProcessorEditor()
{
}

//==============================================================================
void NewProjectAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.drawImage(background_image, 0, 0, 300, 192, 0, 0, 300, 192);
}

void NewProjectAudioProcessorEditor::resized()
{
    
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
