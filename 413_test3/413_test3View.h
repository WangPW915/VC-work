
// 413_test3View.h : CMy413_test3View 类的接口
//

#pragma once


class CMy413_test3View : public CView
{
protected: // 仅从序列化创建
	CMy413_test3View();
	DECLARE_DYNCREATE(CMy413_test3View)

// 特性
public:
	CMy413_test3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMy413_test3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	int satus;
	int flag;
	CRect cr;
	bool set;

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 413_test3View.cpp 中的调试版本
inline CMy413_test3Doc* CMy413_test3View::GetDocument() const
   { return reinterpret_cast<CMy413_test3Doc*>(m_pDocument); }
#endif

