#pragma once
#include "afxwin.h"

#include <vector>

// CUserAccountsDlg dialog

class CUserAccountsDlg : public CDialog
{
	DECLARE_DYNAMIC(CUserAccountsDlg)

public:
	CUserAccountsDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CUserAccountsDlg();

// Dialog Data
	enum { IDD = IDD_DIALOG_USERACCOUNTS };

    std::vector<UserAccount> m_accounts;

    void UpdateControls();
    void ShowUserAccount(const UserAccount& useraccount);
    void ListAccounts();
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
    CButton m_btnNew;
    CButton m_btnAdd;
    CButton m_btnDel;
    CListBox m_wndAccounts;
    CEdit m_wndUsername;
    CEdit m_wndPassword;
    CButton m_wndAdminUser;
    CButton m_wndDefaultUser;
    afx_msg void OnBnClickedButtonNew();
    afx_msg void OnBnClickedButtonAdd();
    afx_msg void OnBnClickedButtonDel();
    afx_msg void OnLbnSelchangeListAccounts();
    virtual BOOL OnInitDialog();
    afx_msg void OnEnChangeEditUsername();
    afx_msg void OnEnChangeEditPassword();
    CComboBox m_wndInitChannel;
    afx_msg void OnBnClickedButtonAddchannel();
    afx_msg void OnBnClickedButtonDelchannel();
    CListBox m_wndAvailChannels;
    CListBox m_wndSelChannels;
    CEdit m_wndNote;
    CEdit m_wndBitrate;
    int m_nBitrate;

    CButton m_wndDoubleLogin;
    CButton m_wndTempChannels;
    CButton m_wndViewAllUsers;
    CButton m_wndUserBcast;
    CButton m_wndTransmitVoice;
    CButton m_wndTransmitVideo;
    CButton m_wndTransmitDesktops;
    CButton m_wndTransmitDesktopInput;
    afx_msg void OnBnClickedRadioDefaultuser();
    afx_msg void OnBnClickedRadioAdmin();
    CButton m_wndPermChannels;
    CButton m_wndKickUsers;
    CButton m_wndBanUsers;
    CButton m_wndMoveUsers;
    CButton m_wndChannelOp;
    CButton m_wndUploadFiles;
    CButton m_wndDownloadFiles;
    CButton m_wndSrvProp;
    CButton m_wndTransmitAudFiles;
    CButton m_wndTransmitVidFiles;
};
