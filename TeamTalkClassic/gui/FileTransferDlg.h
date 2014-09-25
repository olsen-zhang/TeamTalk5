#pragma once
#include "afxwin.h"
#include "afxcmn.h"


#define WM_FILETRANSFERDLG_CLOSED WM_USER + 800

// CFileTransferDlg dialog

class CFileTransferDlg : public CDialog
{
    DECLARE_DYNAMIC(CFileTransferDlg)

public:
    CFileTransferDlg(int nTransferID, BOOL bAdmin, CWnd* pParent = NULL);   // standard constructor

    void Completed();
    void Failed();
// Dialog Data
    enum { IDD = IDD_DIALOG_FILETRANSFER };

protected:
    virtual ~CFileTransferDlg();
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    DECLARE_MESSAGE_MAP()

    BOOL UpdateTransferInfo();
public:
    CStatic m_wndFilename;
    CStatic m_wndFileSize;
    CStatic m_wndTransferred;
    CProgressCtrl m_wndProgressBar;
    CButton m_wndCancel;
    int m_nTransferID;
    INT64 m_nTotalSize;
    INT64 m_nLastTransferred;
    BOOL m_bCompleted;
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    DWORD m_nStartTime;
    CString m_szLocalFilename;
protected:
    virtual void PostNcDestroy();
    virtual void OnCancel();
public:
    virtual BOOL OnInitDialog();
    CStatic m_wndThroughput;
    BOOL m_bAutoClose;
    CButton m_wndAutoClose;
    afx_msg void OnBnClickedCheckAutoclose();
    CButton m_wndOpen;
    afx_msg void OnBnClickedButtonOpen();
};
