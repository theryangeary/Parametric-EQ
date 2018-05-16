/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
ParametriceqAudioProcessorEditor::ParametriceqAudioProcessorEditor (ParametriceqAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (200, 200);

	highPassFrequencySlider.setSliderStyle(Slider::LinearHorizontal);
	highPassFrequencySlider.setRange(0.0, 20000.0, 0.1);
	highPassFrequencySlider.setTextBoxStyle(Slider::TextBoxAbove, false, 90, 90);
	highPassFrequencySlider.setPopupDisplayEnabled(false, false, this);
	highPassFrequencySlider.setTextValueSuffix(" Hz");
	highPassFrequencySlider.setValue(0.0);

	addAndMakeVisible(&highPassFrequencySlider);
}

ParametriceqAudioProcessorEditor::~ParametriceqAudioProcessorEditor()
{
}

//==============================================================================
void ParametriceqAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void ParametriceqAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..

	highPassFrequencySlider.setBounds(PADDING, PADDING, getWidth() - 2*PADDING, SLIDER_HEIGHT);
}
