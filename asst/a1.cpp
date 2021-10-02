/* -----------------------------------------------------------------
 * File:    a1.cpp
 * Created: 2015-09-15
 * Updated: 2019-08-10
 * -----------------------------------------------------------------
 *
 * Assignment 01
 *
 * ---------------------------------------------------------------*/

#include "a1.h"
#include <cmath>
using namespace std;

// Create a surprise image
Image create_special() {
  // // --------- HANDOUT  PS01 ------------------------------
  // create the image outlined in the handout
  Image im = Image(290, 150, 3);
  im.set_color(1.0f, 1.0f, 1.0f);
  im.create_rectangle(0, 0, 31, 149, 0.64f, 0.12f, 0.20f);
  im.create_rectangle(52, 0, 83, 102, 0.64f, 0.12f, 0.20f);
  im.create_rectangle(103, 0, 134, 149, 0.64f, 0.12f, 0.20f);
  im.create_rectangle(155, 0, 186, 30, 0.64f, 0.12f, 0.20f);
  im.create_rectangle(155, 48, 186, 149, 0.55f, 0.55f, 0.55f);
  im.create_rectangle(207, 0, 289, 30, 0.64f, 0.12f, 0.20f);
  im.create_rectangle(207, 48, 238, 149, 0.64f, 0.12f, 0.20f);
  return im; // change this
}

// Change the brightness of the image
// const Image & means a reference to im will get passed to the function,
// but the compiler won't let you modify it within the function.
// So you will return a new image
Image brightness(const Image &im, float factor) {
  // --------- HANDOUT  PS01 ------------------------------
  // Image output(im.width(), im.height(), im.channels());
  // Modify image brightness
  // return output;
  return Image(1, 1, 1); // Change this
}

Image contrast(const Image &im, float factor, float midpoint) {
  // --------- HANDOUT  PS01 ------------------------------
  // Image output(im.width(), im.height(), im.channels());
  // Modify image contrast
  // return output;
  return Image(1, 1, 1); // Change this
}

Image color2gray(const Image &im, const std::vector<float> &weights) {
  // --------- HANDOUT  PS01 ------------------------------
  // Image output(im.width(), im.height(), 1);
  // Convert to grayscale
  return Image(1, 1, 1); // Change this
}

// For this function, we want two outputs, a single channel luminance image
// and a three channel chrominance image. Return them in a vector with
// luminance first
std::vector<Image> lumiChromi(const Image &im) {
  // --------- HANDOUT  PS01 ------------------------------
  // Create the luminance image
  // Create the chrominance image
  // Create the output vector as (luminance, chrominance)
  return std::vector<Image>(); // Change this
}

// Modify brightness then contrast
Image brightnessContrastLumi(const Image &im, float brightF, float contrastF,
                             float midpoint) {
  // --------- HANDOUT  PS01 ------------------------------
  // Modify brightness, then contrast of luminance image
  return Image(1, 1, 1); // Change this
}

Image rgb2yuv(const Image &im) {
  // --------- HANDOUT  PS01 ------------------------------
  // Create output image of appropriate size
  // Change colorspace
  return Image(1, 1, 1); // Change this
}

Image yuv2rgb(const Image &im) {
  // --------- HANDOUT  PS01 ------------------------------
  // Create output image of appropriate size
  // Change colorspace
  return Image(1, 1, 1); // Change this
}

Image saturate(const Image &im, float factor) {
  // --------- HANDOUT  PS01 ------------------------------
  // Create output image of appropriate size
  // Saturate image
  // return output;
  return Image(1, 1, 1); // Change this
}

// Gamma codes the image
Image gamma_code(const Image &im, float gamma) {
  // // --------- HANDOUT  PS01 ------------------------------
  // Image output(im.width(), im.height(), im.channels());
  // Gamma encodes the image
  // return output;
  return Image(1, 1, 1); // Change this
}

// Quantizes the image to 2^bits levels and scales back to 0~1
Image quantize(const Image &im, int bits) {
  // // --------- HANDOUT  PS01 ------------------------------
  // Image output(im.width(), im.height(), im.channels());
  // Quantizes the image to 2^bits levels
  // return output;
  return Image(1, 1, 1); // Change this
}

// Compare between first quantize then gamma_encode and first gamma_encode
// then quantize
std::vector<Image> gamma_test(const Image &im, int bits, float gamma) {
  // // --------- HANDOUT  PS01 ------------------------------
  // // im1 = quantize  the image
  // // im2 = linearize, then quantize. then gamma_encode the image
  // // Remember to create the output images and the output vector
  // // Push the images onto the vector
  // // Do all the required processing
  // // Return the vector, color image first
  return std::vector<Image>(); // Change this
}

// Return two images in a C++ vector
std::vector<Image> spanish(const Image &im) {
  // --------- HANDOUT  PS01 ------------------------------
  // Remember to create the output images and the output vector
  // Push the images onto the vector
  // Do all the required processing
  // Return the vector, color image first
  return std::vector<Image>(); // Change this
}

// White balances an image using the gray world assumption
Image grayworld(const Image &im) {
  // --------- HANDOUT  PS01 ------------------------------
  // Implement automatic white balance by multiplying each channel
  // of the input by a factor such that the three channel of the output
  // image have the same mean value. The mean value of the green channel
  // is taken as reference.
  return Image(1, 1, 1); // Change this
}