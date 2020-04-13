
// 实验3_3_10View.h : C实验3_3_10View 类的接口
//

#pragma once


class C实验3_3_10View : public CView
{
protected: // 仅从序列化创建
	C实验3_3_10View();
	DECLARE_DYNCREATE(C实验3_3_10View)

// 特性
public:
	C实验3_3_10Doc* GetDocument() const;

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
	virtual ~C实验3_3_10View();
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

#ifndef _DEBUG  // 实验3_3_10View.cpp 中的调试版本
inline C实验3_3_10Doc* C实验3_3_10View::GetDocument() const
   { return reinterpret_cast<C实验3_3_10Doc*>(m_pDocument); }
#endif

