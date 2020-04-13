
// 413_test1View.h : CMy413_test1View 类的接口
//

#pragma once


class CMy413_test1View : public CView
{
protected: // 仅从序列化创建
	CMy413_test1View();
	DECLARE_DYNCREATE(CMy413_test1View)

// 特性
public:
	CMy413_test1Doc* GetDocument() const;

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
	virtual ~CMy413_test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	int x, y, x1, y1;
	int flag;
	CRect cr;

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 413_test1View.cpp 中的调试版本
inline CMy413_test1Doc* CMy413_test1View::GetDocument() const
   { return reinterpret_cast<CMy413_test1Doc*>(m_pDocument); }
#endif

