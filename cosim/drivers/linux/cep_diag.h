//************************************************************************
// Copyright (C) 2020 Massachusetts Institute of Technology
//
// File Name:      
// Program:        Common Evaluation Platform (CEP)
// Description:    
// Notes:          
//
//************************************************************************

#ifndef CEP_TESTS_H
#define CEP_TESTS_H

#include <stdlib.h>
#include <stddef.h>

//
// ===========================
// Version/Tag stuffs
// ===========================
//
#if 1
#define CEP_TAG     "CEPTest"
// cvs version
#define CEP_VERSION "V2.0"
#endif

/*
 Function protos
*/
#ifdef __cplusplus
extern "C" {
#endif

  //
  // Provice cep_read_reg and cep_write_reg
  //
  u_int64_t lnx_cep_read(u_int32_t offs);
  void lnx_cep_write(u_int32_t offs,u_int64_t pData);
  //
  u_int64_t lnx_mem_read(u_int32_t offs);
  void lnx_mem_write(u_int32_t offs,u_int64_t pData);  

#ifdef __cplusplus
}
#endif

#endif
