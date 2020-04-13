
// test3_16Doc.h : Ctest3_16Doc 类的接口
//


#pragma once


class Ctest3_16Doc : public CDocument //对于鼠标左键按下，移动直到抬起的这个过程，在按下时记录下鼠标位置,　
	                                  //抬起画出一个矩形，以按下和抬起的位置作为矩形的两对角。
									  //且在鼠标移动过程中在客户区显示鼠标的位置信息
{
protected: // 仅从序列化创建
	Ctest3_16Doc();
	DECLARE_DYNCREATE(Ctest3_16Doc)

// 特性
public:
	CRect A;
// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~Ctest3_16Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
