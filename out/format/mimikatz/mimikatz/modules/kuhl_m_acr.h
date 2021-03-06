# 1 "project/mimikatz/mimikatz/modules/kuhl_m_acr.h"





       
#include "kuhl_m.h"
#include "../../modules/kull_m_acr.h"
#include "../../modules/kull_m_pn532.h"

const KUHL_M kuhl_m_acr;

NTSTATUS kuhl_m_acr_init();
NTSTATUS kuhl_m_acr_clean();

NTSTATUS kuhl_m_acr_open(int argc, wchar_t * argv[]);
NTSTATUS kuhl_m_acr_close(int argc, wchar_t * argv[]);

NTSTATUS kuhl_m_acr_firmware(int argc, wchar_t * argv[]);
NTSTATUS kuhl_m_acr_info(int argc, wchar_t * argv[]);
