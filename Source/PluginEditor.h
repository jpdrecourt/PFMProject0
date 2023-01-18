/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class PFMProject0AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    PFMProject0AudioProcessorEditor (PFMProject0AudioProcessor&);
    ~PFMProject0AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

    void mouseDown(const juce::MouseEvent& e) override;
    void mouseUp(const juce::MouseEvent& e) override;


private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PFMProject0AudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PFMProject0AudioProcessorEditor)
};
