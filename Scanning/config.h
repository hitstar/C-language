#define LIST-RESULT_INDEX 0
#define LIST_REUSLT_IP 1
#define LIST_RESULT_STATUS 2
#define LIST_RESULT_MAC 3
#define LIST_RESULT_NAME 4
#define LIST_RESULT_COMMENT 5

//create the header of the table
m_ctlListResult.InsertColumn(LIST_RESULT_INDEX,"序号",LVCFMT_LEFT,40);
m_ctlListResult.InsertColumn(LIST_RESULT_IP,"IP",LVCFMT_LEFT,110);
m_ctlListResult.InsertColumn(LIST_RESULT_STATUS,"状态",LVCTFT_LEFT,80);
m_ctlListResult.InsertColumn(LIST_RESULT_MAC,"物理地址",LVCTFT_LEFT,115);
m_ctlListResult.InsertColumn(LIST_RESULT_HOST,"主机名",LVCTFT_LEFT,40);
m_ctlListResult.InsertColumn(LIST_RESULT_COMMENT,"注释"，LVCTFT_LEFT,40);

//setting the style of the table is with the grid,and choosing one of the rows,rather than first field
m_ctlListResult.SetExtendedStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
CString strItem ;
for(int i = 0; i < iNum; i++)
{
    strItem.Format("%d",i+1) ;
    m_ctlListResult.InsertItem(i, strItem);
    strItem.Format("192.168.1.%d",i+1);
    m_ctlListResult.SetItemText(index, LIST_RESULT_IP, strStatus);
    m_ctlListResult.SetItemText(index, LIST_RESULT_STATUS,"扫描中...");
}


