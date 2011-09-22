<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class running
    Inherits System.Windows.Forms.UserControl

    'UserControl overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.components = New System.ComponentModel.Container()
        Me.run = New System.Windows.Forms.Timer(Me.components)
        Me.modelLbl = New System.Windows.Forms.RadioButton()
        Me.waitingLbl = New System.Windows.Forms.RadioButton()
        Me.productLbl = New System.Windows.Forms.RadioButton()
        Me.indexLbl = New System.Windows.Forms.RadioButton()
        Me.bootromlbl = New System.Windows.Forms.RadioButton()
        Me.pathLbl = New System.Windows.Forms.RadioButton()
        Me.valueLbl = New System.Windows.Forms.RadioButton()
        Me.doneLbl = New System.Windows.Forms.RadioButton()
        Me.ProgressBar1 = New System.Windows.Forms.ProgressBar()
        Me.idBtn = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'run
        '
        Me.run.Interval = 5862
        '
        'modelLbl
        '
        Me.modelLbl.AutoSize = True
        Me.modelLbl.BackColor = System.Drawing.Color.Transparent
        Me.modelLbl.Enabled = False
        Me.modelLbl.Font = New System.Drawing.Font("Times New Roman", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.modelLbl.ForeColor = System.Drawing.SystemColors.Control
        Me.modelLbl.Location = New System.Drawing.Point(3, 30)
        Me.modelLbl.Name = "modelLbl"
        Me.modelLbl.Size = New System.Drawing.Size(135, 21)
        Me.modelLbl.TabIndex = 3
        Me.modelLbl.TabStop = True
        Me.modelLbl.Text = "Grabbing Model..."
        Me.modelLbl.UseVisualStyleBackColor = False
        Me.modelLbl.Visible = False
        '
        'waitingLbl
        '
        Me.waitingLbl.AutoSize = True
        Me.waitingLbl.BackColor = System.Drawing.Color.Transparent
        Me.waitingLbl.Font = New System.Drawing.Font("Times New Roman", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.waitingLbl.ForeColor = System.Drawing.SystemColors.Control
        Me.waitingLbl.Location = New System.Drawing.Point(3, 3)
        Me.waitingLbl.Name = "waitingLbl"
        Me.waitingLbl.Size = New System.Drawing.Size(148, 21)
        Me.waitingLbl.TabIndex = 2
        Me.waitingLbl.TabStop = True
        Me.waitingLbl.Text = "Waiting for device..."
        Me.waitingLbl.UseVisualStyleBackColor = False
        Me.waitingLbl.Visible = False
        '
        'productLbl
        '
        Me.productLbl.AutoSize = True
        Me.productLbl.BackColor = System.Drawing.Color.Transparent
        Me.productLbl.Enabled = False
        Me.productLbl.Font = New System.Drawing.Font("Times New Roman", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.productLbl.ForeColor = System.Drawing.SystemColors.Control
        Me.productLbl.Location = New System.Drawing.Point(3, 57)
        Me.productLbl.Name = "productLbl"
        Me.productLbl.Size = New System.Drawing.Size(144, 21)
        Me.productLbl.TabIndex = 4
        Me.productLbl.TabStop = True
        Me.productLbl.Text = "Grabbing Product..."
        Me.productLbl.UseVisualStyleBackColor = False
        Me.productLbl.Visible = False
        '
        'indexLbl
        '
        Me.indexLbl.AutoSize = True
        Me.indexLbl.BackColor = System.Drawing.Color.Transparent
        Me.indexLbl.Enabled = False
        Me.indexLbl.Font = New System.Drawing.Font("Times New Roman", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.indexLbl.ForeColor = System.Drawing.SystemColors.Control
        Me.indexLbl.Location = New System.Drawing.Point(3, 84)
        Me.indexLbl.Name = "indexLbl"
        Me.indexLbl.Size = New System.Drawing.Size(131, 21)
        Me.indexLbl.TabIndex = 5
        Me.indexLbl.TabStop = True
        Me.indexLbl.Text = "Grabbing Index..."
        Me.indexLbl.UseVisualStyleBackColor = False
        Me.indexLbl.Visible = False
        '
        'bootromlbl
        '
        Me.bootromlbl.AutoSize = True
        Me.bootromlbl.BackColor = System.Drawing.Color.Transparent
        Me.bootromlbl.Enabled = False
        Me.bootromlbl.Font = New System.Drawing.Font("Times New Roman", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.bootromlbl.ForeColor = System.Drawing.SystemColors.Control
        Me.bootromlbl.Location = New System.Drawing.Point(3, 111)
        Me.bootromlbl.Name = "bootromlbl"
        Me.bootromlbl.Size = New System.Drawing.Size(208, 21)
        Me.bootromlbl.TabIndex = 6
        Me.bootromlbl.TabStop = True
        Me.bootromlbl.Text = "Grabbing BOOTROM Keys..."
        Me.bootromlbl.UseVisualStyleBackColor = False
        Me.bootromlbl.Visible = False
        '
        'pathLbl
        '
        Me.pathLbl.AutoSize = True
        Me.pathLbl.BackColor = System.Drawing.Color.Transparent
        Me.pathLbl.Enabled = False
        Me.pathLbl.Font = New System.Drawing.Font("Times New Roman", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.pathLbl.ForeColor = System.Drawing.SystemColors.Control
        Me.pathLbl.Location = New System.Drawing.Point(3, 138)
        Me.pathLbl.Name = "pathLbl"
        Me.pathLbl.Size = New System.Drawing.Size(131, 21)
        Me.pathLbl.TabIndex = 7
        Me.pathLbl.TabStop = True
        Me.pathLbl.Text = "Grabbing Paths..."
        Me.pathLbl.UseVisualStyleBackColor = False
        Me.pathLbl.Visible = False
        '
        'valueLbl
        '
        Me.valueLbl.AutoSize = True
        Me.valueLbl.BackColor = System.Drawing.Color.Transparent
        Me.valueLbl.Enabled = False
        Me.valueLbl.Font = New System.Drawing.Font("Times New Roman", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.valueLbl.ForeColor = System.Drawing.SystemColors.Control
        Me.valueLbl.Location = New System.Drawing.Point(3, 165)
        Me.valueLbl.Name = "valueLbl"
        Me.valueLbl.Size = New System.Drawing.Size(137, 21)
        Me.valueLbl.TabIndex = 8
        Me.valueLbl.TabStop = True
        Me.valueLbl.Text = "Grabbing Values..."
        Me.valueLbl.UseVisualStyleBackColor = False
        Me.valueLbl.Visible = False
        '
        'doneLbl
        '
        Me.doneLbl.AutoSize = True
        Me.doneLbl.BackColor = System.Drawing.Color.Transparent
        Me.doneLbl.Enabled = False
        Me.doneLbl.Font = New System.Drawing.Font("Times New Roman", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.doneLbl.ForeColor = System.Drawing.SystemColors.Control
        Me.doneLbl.Location = New System.Drawing.Point(3, 192)
        Me.doneLbl.Name = "doneLbl"
        Me.doneLbl.Size = New System.Drawing.Size(71, 21)
        Me.doneLbl.TabIndex = 9
        Me.doneLbl.TabStop = True
        Me.doneLbl.Text = "DONE"
        Me.doneLbl.UseVisualStyleBackColor = False
        Me.doneLbl.Visible = False
        '
        'ProgressBar1
        '
        Me.ProgressBar1.Location = New System.Drawing.Point(80, 192)
        Me.ProgressBar1.Name = "ProgressBar1"
        Me.ProgressBar1.Size = New System.Drawing.Size(404, 23)
        Me.ProgressBar1.TabIndex = 10
        Me.ProgressBar1.Visible = False
        '
        'idBtn
        '
        Me.idBtn.FlatStyle = System.Windows.Forms.FlatStyle.System
        Me.idBtn.Font = New System.Drawing.Font("Times New Roman", 10.2!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.idBtn.Location = New System.Drawing.Point(157, 84)
        Me.idBtn.Name = "idBtn"
        Me.idBtn.Size = New System.Drawing.Size(240, 47)
        Me.idBtn.TabIndex = 11
        Me.idBtn.Text = "Start (if in Recovery Mode)"
        Me.idBtn.UseVisualStyleBackColor = True
        '
        'running
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(8.0!, 16.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.ControlDark
        Me.Controls.Add(Me.idBtn)
        Me.Controls.Add(Me.ProgressBar1)
        Me.Controls.Add(Me.doneLbl)
        Me.Controls.Add(Me.valueLbl)
        Me.Controls.Add(Me.pathLbl)
        Me.Controls.Add(Me.bootromlbl)
        Me.Controls.Add(Me.indexLbl)
        Me.Controls.Add(Me.productLbl)
        Me.Controls.Add(Me.modelLbl)
        Me.Controls.Add(Me.waitingLbl)
        Me.Name = "running"
        Me.Size = New System.Drawing.Size(487, 226)
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents run As System.Windows.Forms.Timer
    Friend WithEvents modelLbl As System.Windows.Forms.RadioButton
    Friend WithEvents waitingLbl As System.Windows.Forms.RadioButton
    Friend WithEvents productLbl As System.Windows.Forms.RadioButton
    Friend WithEvents indexLbl As System.Windows.Forms.RadioButton
    Friend WithEvents bootromlbl As System.Windows.Forms.RadioButton
    Friend WithEvents pathLbl As System.Windows.Forms.RadioButton
    Friend WithEvents valueLbl As System.Windows.Forms.RadioButton
    Friend WithEvents doneLbl As System.Windows.Forms.RadioButton
    Friend WithEvents ProgressBar1 As System.Windows.Forms.ProgressBar
    Friend WithEvents idBtn As System.Windows.Forms.Button

End Class
