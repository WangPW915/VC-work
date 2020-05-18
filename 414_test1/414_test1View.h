
// 414_test1View.h : CMy414_test1View 类的接口
//

#pragma once


class CMy414_test1View : public CView
{
protected: // 仅从序列化创建
	CMy414_test1View();
	DECLARE_DYNCREATE(CMy414_test1View)

// 特性
public:
	CMy414_test1Doc* GetDocument() const;

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
	virtual ~CMy414_test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // 414_test1View.cpp 中的调试版本
inline CMy414_test1Doc* CMy414_test1View::GetDocument() const
   { return reinterpret_cast<CMy414_test1Doc*>(m_pDocument); }
#endif

