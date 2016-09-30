/*
 * The MIT License (MIT)
 * 
 * Copyright (c) 2016 CNES
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "testarea.h"


// structure definition for composite testarea_testservice_testcomposite
struct _testarea_testservice_testcomposite_t {
  mal_string_t * stringfield;
  bool intfield_is_present;
  mal_integer_t intfield;
  bool floatfield_is_present;
  mal_float_t floatfield;
  bool doublefield_is_present;
  mal_double_t doublefield;
};

// fields accessors for composite testarea_testservice_testcomposite
mal_string_t * testarea_testservice_testcomposite_get_stringfield(testarea_testservice_testcomposite_t * self)
{
  return self->stringfield;
}
void testarea_testservice_testcomposite_set_stringfield(testarea_testservice_testcomposite_t * self, mal_string_t * stringfield)
{
  self->stringfield = stringfield;
}
bool testarea_testservice_testcomposite_intfield_is_present(testarea_testservice_testcomposite_t * self)
{
  return self->intfield_is_present;
}
void testarea_testservice_testcomposite_intfield_set_present(testarea_testservice_testcomposite_t * self, bool is_present)
{
  self->intfield_is_present = is_present;
}
mal_integer_t testarea_testservice_testcomposite_get_intfield(testarea_testservice_testcomposite_t * self)
{
  return self->intfield;
}
void testarea_testservice_testcomposite_set_intfield(testarea_testservice_testcomposite_t * self, mal_integer_t intfield)
{
  self->intfield = intfield;
}
bool testarea_testservice_testcomposite_floatfield_is_present(testarea_testservice_testcomposite_t * self)
{
  return self->floatfield_is_present;
}
void testarea_testservice_testcomposite_floatfield_set_present(testarea_testservice_testcomposite_t * self, bool is_present)
{
  self->floatfield_is_present = is_present;
}
mal_float_t testarea_testservice_testcomposite_get_floatfield(testarea_testservice_testcomposite_t * self)
{
  return self->floatfield;
}
void testarea_testservice_testcomposite_set_floatfield(testarea_testservice_testcomposite_t * self, mal_float_t floatfield)
{
  self->floatfield = floatfield;
}
bool testarea_testservice_testcomposite_doublefield_is_present(testarea_testservice_testcomposite_t * self)
{
  return self->doublefield_is_present;
}
void testarea_testservice_testcomposite_doublefield_set_present(testarea_testservice_testcomposite_t * self, bool is_present)
{
  self->doublefield_is_present = is_present;
}
mal_double_t testarea_testservice_testcomposite_get_doublefield(testarea_testservice_testcomposite_t * self)
{
  return self->doublefield;
}
void testarea_testservice_testcomposite_set_doublefield(testarea_testservice_testcomposite_t * self, mal_double_t doublefield)
{
  self->doublefield = doublefield;
}

// default constructor
testarea_testservice_testcomposite_t * testarea_testservice_testcomposite_new(void)
{
  testarea_testservice_testcomposite_t *self = (testarea_testservice_testcomposite_t *) calloc(1, sizeof(testarea_testservice_testcomposite_t));
  if (!self)
    return NULL;
  return self;
}

// encoding functions related to transport malbinary
int testarea_testservice_testcomposite_add_encoding_length_malbinary(testarea_testservice_testcomposite_t * self, mal_encoder_t * encoder, void * cursor)
{
  int rc = 0;
  rc = mal_encoder_add_presence_flag_encoding_length(encoder, (self->stringfield != NULL), cursor);
  if (rc < 0)
    return rc;
  if ((self->stringfield != NULL))
  {
    rc = mal_encoder_add_string_encoding_length(encoder, self->stringfield, cursor);
    if (rc < 0)
      return rc;
  }
  rc = mal_encoder_add_presence_flag_encoding_length(encoder, self->intfield_is_present, cursor);
  if (rc < 0)
    return rc;
  if (self->intfield_is_present)
  {
    rc = mal_encoder_add_integer_encoding_length(encoder, self->intfield, cursor);
    if (rc < 0)
      return rc;
  }
  rc = mal_encoder_add_presence_flag_encoding_length(encoder, self->floatfield_is_present, cursor);
  if (rc < 0)
    return rc;
  if (self->floatfield_is_present)
  {
    rc = mal_encoder_add_float_encoding_length(encoder, self->floatfield, cursor);
    if (rc < 0)
      return rc;
  }
  rc = mal_encoder_add_presence_flag_encoding_length(encoder, self->doublefield_is_present, cursor);
  if (rc < 0)
    return rc;
  if (self->doublefield_is_present)
  {
    rc = mal_encoder_add_double_encoding_length(encoder, self->doublefield, cursor);
    if (rc < 0)
      return rc;
  }
  return rc;
}
int testarea_testservice_testcomposite_encode_malbinary(testarea_testservice_testcomposite_t * self, mal_encoder_t * encoder, void * cursor)
{
  int rc = 0;
  bool presence_flag;
  presence_flag = (self->stringfield != NULL);
  rc = mal_encoder_encode_presence_flag(encoder, cursor, presence_flag);
  if (rc < 0)
    return rc;
  if (presence_flag)
  {
    rc = mal_encoder_encode_string(encoder, cursor, self->stringfield);
    if (rc < 0)
      return rc;
  }
  presence_flag = self->intfield_is_present;
  rc = mal_encoder_encode_presence_flag(encoder, cursor, presence_flag);
  if (rc < 0)
    return rc;
  if (presence_flag)
  {
    rc = mal_encoder_encode_integer(encoder, cursor, self->intfield);
    if (rc < 0)
      return rc;
  }
  presence_flag = self->floatfield_is_present;
  rc = mal_encoder_encode_presence_flag(encoder, cursor, presence_flag);
  if (rc < 0)
    return rc;
  if (presence_flag)
  {
    rc = mal_encoder_encode_float(encoder, cursor, self->floatfield);
    if (rc < 0)
      return rc;
  }
  presence_flag = self->doublefield_is_present;
  rc = mal_encoder_encode_presence_flag(encoder, cursor, presence_flag);
  if (rc < 0)
    return rc;
  if (presence_flag)
  {
    rc = mal_encoder_encode_double(encoder, cursor, self->doublefield);
    if (rc < 0)
      return rc;
  }
  return rc;
}
int testarea_testservice_testcomposite_decode_malbinary(testarea_testservice_testcomposite_t * self, mal_decoder_t * decoder, void * cursor)
{
  int rc = 0;
  bool presence_flag;
  rc = mal_decoder_decode_presence_flag(decoder, cursor, &presence_flag);
  if (rc < 0)
    return rc;
  if (presence_flag)
  {
    rc = mal_decoder_decode_string(decoder, cursor, &self->stringfield);
    if (rc < 0)
      return rc;
  }
  else
  {
    self->stringfield = NULL;
  }
  rc = mal_decoder_decode_presence_flag(decoder, cursor, &presence_flag);
  if (rc < 0)
    return rc;
  if (presence_flag)
  {
    rc = mal_decoder_decode_integer(decoder, cursor, &self->intfield);
    if (rc < 0)
      return rc;
  }
  self->intfield_is_present = presence_flag;
  rc = mal_decoder_decode_presence_flag(decoder, cursor, &presence_flag);
  if (rc < 0)
    return rc;
  if (presence_flag)
  {
    rc = mal_decoder_decode_float(decoder, cursor, &self->floatfield);
    if (rc < 0)
      return rc;
  }
  self->floatfield_is_present = presence_flag;
  rc = mal_decoder_decode_presence_flag(decoder, cursor, &presence_flag);
  if (rc < 0)
    return rc;
  if (presence_flag)
  {
    rc = mal_decoder_decode_double(decoder, cursor, &self->doublefield);
    if (rc < 0)
      return rc;
  }
  self->doublefield_is_present = presence_flag;
  return rc;
}

// destructor
void testarea_testservice_testcomposite_destroy(testarea_testservice_testcomposite_t ** self_p)
{
  if ((*self_p)->stringfield != NULL)
  {
    mal_string_destroy(& (*self_p)->stringfield);
  }
  free(*self_p);
  (*self_p) = NULL;
}

// test function
void testarea_testservice_testcomposite_test(bool verbose)
{
  printf(" * TestArea:TestService:TestComposite: ");
  if (verbose)
    printf("\n");
  printf("OK\n");
}
