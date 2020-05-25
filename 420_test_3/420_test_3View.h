
// 420_test_3View.h : CMy420_test_3View 类的接口
//

#pragma once


class CMy420_test_3View : public CView
{
protected: // 仅从序列化创建
	CMy420_test_3View();
	DECLARE_DYNCREATE(CMy420_test_3View)

// 特性
public:
	CMy420_test_3Doc* GetDocument() const;

// 操作
public:
	CRect cr;

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
	virtual ~CMy420_test_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 420_test_3View.cpp 中的调试版本
inline CMy420_test_3Doc* CMy420_test_3View::GetDocument() const
   { return reinterpret_cast<CMy420_test_3Doc*>(m_pDocument); }
#endif

