
// 3_24Text3View.h : CMy3_24Text3View 类的接口
//

#pragma once


class CMy3_24Text3View : public CView
{
protected: // 仅从序列化创建
	CMy3_24Text3View();
	DECLARE_DYNCREATE(CMy3_24Text3View)

// 特性
public:
	CMy3_24Text3Doc* GetDocument() const;

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
	virtual ~CMy3_24Text3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
	afx_msg void OnDrawrectangle();
	afx_msg void OnDrawellipse();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 3_24Text3View.cpp 中的调试版本
inline CMy3_24Text3Doc* CMy3_24Text3View::GetDocument() const
   { return reinterpret_cast<CMy3_24Text3Doc*>(m_pDocument); }
#endif

