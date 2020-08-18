﻿// CalculatorDlg.cpp: 实现文件

#include "pch.h"
#include "framework.h"
#include "Calculator.h"
#include "CalculatorDlg.h"
#include "afxdialogex.h"
#include "Data_Analysis.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCalculatorDlg 对话框

CCalculatorDlg::CCalculatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATOR_DIALOG, pParent)
	, Value(_T(""))
	, History(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, Value);
	DDX_Text(pDX, IDC_EDIT3, History);
}

BEGIN_MESSAGE_MAP(CCalculatorDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CCalculatorDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CCalculatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CCalculatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CCalculatorDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CCalculatorDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON7, &CCalculatorDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CCalculatorDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CCalculatorDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CCalculatorDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CCalculatorDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CCalculatorDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CCalculatorDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CCalculatorDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CCalculatorDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CCalculatorDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CCalculatorDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CCalculatorDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CCalculatorDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CCalculatorDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CCalculatorDlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CCalculatorDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &CCalculatorDlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &CCalculatorDlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &CCalculatorDlg::OnBnClickedButton25)
END_MESSAGE_MAP()

// CCalculatorDlg 消息处理程序

BOOL CCalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。 当应用程序主窗口不是对话框时，框架将自动 执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码 来绘制该图标。 对于使用文档/视图模型的 MFC 应用程序， 这将由框架自动完成。

void CCalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CCalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

/// <summary>
/// 单击+按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton1()
{
	if (!this->remove_at_once) {
		this->Value += '+';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击-按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton2()
{
	if (!this->remove_at_once) {
		this->Value += '-';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击*按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton3()
{
	if (!this->remove_at_once) {
		this->Value += '*';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击/按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton4()
{
	if (!this->remove_at_once) {
		this->Value += '/';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击√按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton5()
{
	if (!this->remove_at_once) {
		this->Value += "√";
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击^按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton7()
{
	if (!this->remove_at_once) {
		this->Value += '^';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击(按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton8()
{
	if (!this->remove_at_once) {
		this->Value += '(';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击)按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton9()
{
	if (!this->remove_at_once) {
		this->Value += ')';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击退格键
/// </summary>
void CCalculatorDlg::OnBnClickedButton10()
{
	if (this->remove_at_once) {
		// 清空所有已输入的字符
		this->Value = "";
		// 重置状态
		this->remove_at_once = false;
		UpdateData(false);
		return;
	}
	else
	{
		// 删除最后一个输入的字符
		this->Value.Delete(this->Value.GetLength() - 1);
		UpdateData(false);
		return;
	}
}

/// <summary>
/// 单击清空输入按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton11()
{
	// 清空所有已输入的字符
	this->Value = "";
	UpdateData(false);
	return;
}

/// <summary>
/// 单击7按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton12()
{
	if (!this->remove_at_once) {
		this->Value += '7';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击8按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton13()
{
	if (!this->remove_at_once) {
		this->Value += '8';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击9按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton14()
{
	if (!this->remove_at_once) {
		this->Value += '9';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击4按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton15()
{
	if (!this->remove_at_once) {
		this->Value += '4';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击5按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton16()
{
	if (!this->remove_at_once) {
		this->Value += '5';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击6按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton17()
{
	if (!this->remove_at_once) {
		this->Value += '6';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击1按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton18()
{
	if (!this->remove_at_once) {
		this->Value += '1';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击2按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton19()
{
	if (!this->remove_at_once) {
		this->Value += '2';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击3按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton20()
{
	if (!this->remove_at_once) {
		this->Value += '3';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击-（负号）按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton21()
{
	if (!this->remove_at_once) {
		this->Value += '-';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击0按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton22()
{
	if (!this->remove_at_once) {
		this->Value += '0';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击.（小数点）按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton23()
{
	if (!this->remove_at_once) {
		this->Value += '.';
		UpdateData(false);
	}
	return;
}

/// <summary>
/// 单击=按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton24()
{
	// 先判断Value中的表达式是否合法
	if (!check_bracket(this->Value)) {
		this->Value = "输入的表达式非法，请重新输入。";
		this->remove_at_once = true;
		UpdateData(false);
		return;
	}
	if (!check_operator(this->Value)) {
		this->Value = "输入的表达式非法，请重新输入。";
		this->remove_at_once = true;
		UpdateData(false);
		return;
	}
	//再计算得到值
	//写入输入栏，作为结果
	//写入历史记录
}

/// <summary>
/// 单击清空历史记录按钮
/// </summary>
void CCalculatorDlg::OnBnClickedButton25()
{
	//清空历史记录
	this->History = "";
	UpdateData(false);
	remove("History.log");
	ofstream os;
	os.open("History.log");
	os.close();
	return;
}

BOOL CCalculatorDlg::PreTranslateMessage(MSG* pMsg) {
	if (pMsg->message == WM_KEYDOWN)
	{
		switch (pMsg->wParam)
		{
			// 小键盘输入0~9
		case VK_NUMPAD0:
			if (GetKeyState(VK_NUMPAD0) < 0)
				this->OnBnClickedButton22();
			break;
		case VK_NUMPAD1:
			if (GetKeyState(VK_NUMPAD1) < 0)
				this->OnBnClickedButton18();
			break;
		case VK_NUMPAD2:
			if (GetKeyState(VK_NUMPAD2) < 0)
				this->OnBnClickedButton19();
			break;
		case VK_NUMPAD3:
			if (GetKeyState(VK_NUMPAD3) < 0)
				this->OnBnClickedButton20();
			break;
		case VK_NUMPAD4:
			if (GetKeyState(VK_NUMPAD4) < 0)
				this->OnBnClickedButton15();
			break;
		case VK_NUMPAD5:
			if (GetKeyState(VK_NUMPAD5) < 0)
				this->OnBnClickedButton16();
			break;
		case VK_NUMPAD6:
			if (GetKeyState(VK_NUMPAD6) < 0)
				this->OnBnClickedButton17();
			break;
		case VK_NUMPAD7:
			if (GetKeyState(VK_NUMPAD7) < 0)
				this->OnBnClickedButton12();
			break;

		case VK_NUMPAD8:
			if (GetKeyState(VK_NUMPAD8) < 0)
				this->OnBnClickedButton13();
			break;

		case VK_NUMPAD9:
			if (GetKeyState(VK_NUMPAD9) < 0)
				this->OnBnClickedButton14();
			break;
			// 小数点键
		case VK_DECIMAL:
			if (GetKeyState(VK_DECIMAL) < 0)
				this->OnBnClickedButton23();
			break;
			// 等于键
		case VK_OEM_PLUS:
			if (GetKeyState(VK_SHIFT) == 0)
				this->OnBnClickedButton24();
			break;
			// 数字键输入0~9
		case 0x30:
			if (GetKeyState(0x30) < 0)
				this->OnBnClickedButton22();
			break;
		case 0x31:
			if (GetKeyState(0x31) < 0)
				this->OnBnClickedButton18();
			break;
		case 0x32:
			if (GetKeyState(0x32) < 0)
				this->OnBnClickedButton19();
			break;
		case 0x33:
			if (GetKeyState(0x33) < 0)
				this->OnBnClickedButton20();
			break;
		case 0x34:
			if (GetKeyState(0x34) < 0)
				this->OnBnClickedButton15();
			break;
		case 0x35:
			if (GetKeyState(0x35) < 0)
				this->OnBnClickedButton16();
			break;
		case 0x36:
			if (GetKeyState(0x36) < 0)
				this->OnBnClickedButton17();
			break;
		case 0x37:
			if (GetKeyState(0x37) < 0)
				this->OnBnClickedButton12();
			break;

		case 0x38:
			if (GetKeyState(0x38) < 0)
				this->OnBnClickedButton13();
			break;

		case 0x39:
			if (GetKeyState(0x39) < 0)
				this->OnBnClickedButton14();
			break;
			// 回车键
		case VK_RETURN:
			if (GetKeyState(VK_RETURN) < 0)
				this->OnBnClickedButton24();
			break;
		}
	}
	return CDialog::PreTranslateMessage(pMsg);
}