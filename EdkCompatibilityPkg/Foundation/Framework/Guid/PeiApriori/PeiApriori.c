/*++

Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials                          
are licensed and made available under the terms and conditions of the BSD License         
which accompanies this distribution.  The full text of the license may be found at        
http://opensource.org/licenses/bsd-license.php                                            
                                                                                          
THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.             

Module Name:

  PeiApriori.c

Abstract:

   PI 1.0 spec definition.

--*/

#include "Tiano.h"
#include EFI_GUID_DEFINITION(PeiApriori)

EFI_GUID gEfiPeiAprioriGuid = EFI_PEI_APRIORI_FILE_NAME_GUID;
EFI_GUID_STRING(&gEfiPeiAprioriGuid, "PeiApriori", "Efi PeiApriori")