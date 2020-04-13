
// test3_16View.h : Ctest3_16View 类的接口
//

#pragma once


class Ctest3_16View : public CView
{
protected: // 仅从序列化创建
	Ctest3_16View();
	DECLARE_DYNCREATE(Ctest3_16View)

// 特性
public:
	Ctest3_16Doc* GetDocument() const;

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
	virtual ~Ctest3_16View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test3_16View.cpp 中的调试版本
inline Ctest3_16Doc* Ctest3_16View::GetDocument() const
   { return reinterpret_cast<Ctest3_16Doc*>(m_pDocument); }
#endif

